 /* Copyright (c) 2015, The Linux Foundation. All rights reserved.

 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of The Linux Foundation, Inc. nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#include "aw2013_led.h"

#include <i2c_qup.h>
#include <blsp_qup.h>
#include <debug.h>

#define AW2013_I2C_SLAVE_ADDR 	0x45

/* register address */
#define AW_REG_RESET			0x00
#define AW_REG_GLOBAL_CONTROL		0x01
#define AW_REG_LED_STATUS		0x02
#define AW_REG_LED_ENABLE		0x30
#define AW_REG_LED_CONFIG_BASE		0x31
#define AW_REG_LED_BRIGHTNESS_BASE	0x34
#define AW_REG_TIMESET0_BASE		0x37
#define AW_REG_TIMESET1_BASE		0x38

/* register bits */
#define AW2013_CHIPID			0x33
#define AW_LED_MOUDLE_ENABLE_MASK	0x01
#define AW_LED_FADE_OFF_MASK		0x40
#define AW_LED_FADE_ON_MASK		0x20
#define AW_LED_BREATHE_MODE_MASK	0x10
#define AW_LED_RESET_MASK		0x55

static int aw2013_i2c_write(struct qup_i2c_dev *i2c_dev_ptr, uint8_t addr, uint8_t val)
{
	int ret = 0;
	uint8_t data_buf[] = { addr, val };

	/* Create a i2c_msg buffer, that is used to put the controller into write
	   mode and then to write some data. */
	struct i2c_msg msg_buf[] = { {AW2013_I2C_SLAVE_ADDR,
				      I2C_M_WR, 2, data_buf}
	};
	dprintf(SPEW, "aw2013_i2c_write addr= %d, val = %d\n", addr, val);
	if(!i2c_dev_ptr){
		dprintf(ALWAYS, "is null!!!\n");
		return -1;
	}
	ret = qup_i2c_xfer(i2c_dev_ptr, msg_buf, 1);
	if(ret < 0) {
		dprintf(CRITICAL, "qup_i2c_xfer error %d\n", ret);
		return ret;
	}
	return 0;
}

void aw2013_led_enable(bool enable){
	int i = 0;
	struct qup_i2c_dev *i2c_dev_ptr;
	i2c_dev_ptr = qup_blsp_i2c_init(BLSP_ID_2, QUP_ID_4, 400000, 19200000);
	if(!i2c_dev_ptr){
		return;
	}
	if(enable){
		aw2013_i2c_write(i2c_dev_ptr, AW_REG_GLOBAL_CONTROL, AW_LED_MOUDLE_ENABLE_MASK);
		for(i = 0; i<2 ; i++){
			
			aw2013_i2c_write(i2c_dev_ptr, AW_REG_LED_CONFIG_BASE+i, 0x01);
			aw2013_i2c_write(i2c_dev_ptr, AW_REG_LED_BRIGHTNESS_BASE+i, 0xff);
			aw2013_i2c_write(i2c_dev_ptr, AW_REG_LED_ENABLE, enable|(1<<i));
		}
	}else {
		aw2013_i2c_write(i2c_dev_ptr, AW_REG_LED_ENABLE,0x00);
	}
	if(i2c_dev_ptr){
		qup_i2c_deinit(i2c_dev_ptr);
	}
}

