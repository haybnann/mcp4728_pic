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
////////////////////////////////////////////////////////////////////////////////

#ifndef MCP_4728_H
#define MCP_4728_H


#include <stdbool.h>
#include <stdint.h>

#define MCP2748_ADDR    (0x64) //Device Address

#define MCP_IR_WRITE    (0x40)
#define MCP_IR_EE_WRITE (0x50)
#define MCP_FAST_WRITE  (0xC0)


#define MCP_IR_WRITE_LEN (3)

typedef enum {
    CHANNEL_A,
    CHANNEL_B,
    CHANNEL_C,
    CHANNEL_D,
}MCP_CHANNEL; 


bool setChannelValue(MCP_CHANNEL channel, uint16_t value);

#endif