// This is a generated file. Use and modify at your own risk.
////////////////////////////////////////////////////////////////////////////////

//-----------------------------------------------------------------------------
// kernel: rtl_kernel_wizard_0
//
// Purpose: This is a C-model of the RTL kernel intended to be used for cpu
//          emulation.  It is designed to only be functionally equivalent to
//          the RTL Kernel.
//-----------------------------------------------------------------------------
#define WORD_SIZE 32
#define SHORT_WORD_SIZE 16
#define CHAR_WORD_SIZE 8
// Transfer size and buffer size are in words.
#define TRANSFER_SIZE_BITS WORD_SIZE*4096*8
#define BUFFER_WORD_SIZE 8192
#include <string.h>
#include <stdbool.h>
#include "hls_half.h"
#include "ap_axi_sdata.h"
#include "hls_stream.h"



// Function declaration/Interface pragmas to match RTL Kernel
extern "C" void rtl_kernel_wizard_0 (
    int* axi00_ptr0
) {

    #pragma HLS INTERFACE m_axi port=axi00_ptr0 offset=slave bundle=m00_axi
    #pragma HLS INTERFACE s_axilite port=axi00_ptr0 bundle=control
    #pragma HLS INTERFACE s_axilite port=return bundle=control
    #pragma HLS INTERFACE ap_ctrl_hs port=return

// Modify contents below to match the function of the RTL Kernel

    // Create input and output buffers for interface m00_axi
    int m00_axi_input_buffer[BUFFER_WORD_SIZE];
    int m00_axi_output_buffer[BUFFER_WORD_SIZE];


    // length is specified in number of words.
    unsigned int m00_axi_length = 4096;


    // Assign input to a buffer
    memcpy(m00_axi_input_buffer, (int*) axi00_ptr0, m00_axi_length*sizeof(int));

    // Add 1 to input buffer and assign to output buffer.
    for (unsigned int i = 0; i < m00_axi_length; i++) {
      m00_axi_output_buffer[i] = m00_axi_input_buffer[i]  + 1;
    }

    // assign output buffer out to memory
    memcpy((int*) axi00_ptr0, m00_axi_output_buffer, m00_axi_length*sizeof(int));


}

