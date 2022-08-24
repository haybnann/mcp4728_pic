////////////////////////////////////////////////////////////////////////////////
//
//  Copyright © 2022 Hayden Nanney <haydennanney@gmail.com>
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy 
//  of this software and associated documentation files (the ?Software?), to 
//  deal in the Software without restriction, including without limitation the 
//  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
//  sell copies of the Software, and to permit persons to whom the Software is 
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in 
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED ?AS IS?, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//  IN THE SOFTWARE.
//
////////////////////////////////////////////////////////////////////////////////

#include "mcp_4728.h"
#include "../mcc_generated_files/i2c_host/i2c1.h"


bool setChannelValue(MCP_CHANNEL channel, uint16_t value){
    
    uint8_t data[3];
    data[0] = MCP_IR_WRITE | (channel << 1) | 1; //TO DO: udac,ldac settings
    data[1] = ((value & 0xF00) >> 8); //TO DO: Reset bytes (4 MSB).. 
    data[2] = (value & 0xFF);
    
    return I2C1_Write(MCP2748_ADDR, data, MCP_IR_WRITE_LEN); 
}