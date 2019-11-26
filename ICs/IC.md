# Integrated Circuits (IC's)
I bought an 'assortment' back of IC in the 74HCXXX hi speed SI-Gate CMOS Logic ICs, and though i'd see if i could put some simple coding together, in an attempt to become 'quickly' familiar with reading tech docs etc, because i need the practice.

## IC's and their function.
-[74HC125 High Speed CMOS Logic Quad Buffers with 3-State Outputs](#74HC125-High-Speed-CMOS-Logic-Quad-Buffers-with-3-State-Outputs)  
-[74HC126 High Speed CMOS Logic Quad Buffers with 3-State Outputs](#74HC126-High-Speed-CMOS-Logic-Quad-Buffers-with-3-State-Outputs)  
-[74HC132 High Speed CMOS Logic Quad 2-Input Schmitt-Triggered NAND Gates](#74hc132-high-speed-cmos-logic-quad-2-input-schmitt-triggered-nand-gates)  
-[74HC138 High Speed CMOS Logic 3-to-8 Line Decoder Demultiplexer Inverting/Non-Inverting](#74hc138-high-speed-cmos-logic-3-to-8-line-decoder-demultiplexer-inverting-non-inverting)  
 -[74HC139 High Speed CMOS Logic Dual 2-to-4 Line Decoders/Demultiplexers](#74HC139-High-Speed-CMOS-Logic-Dual-2-to-4-Line-Decoders/Demultiplexers)  
 -[74HC157 High Speed CMOS Logic Quad 2-Input Multiplexers](#74HC157-High-Speed-CMOS-Logic-Quad-2-Input-Multiplexers)  
 -[74HC163 High Speed CMOS Logic 4-Bit Binary Counter with Synchronous Reset](#74HC163-High-Speed-CMOS-Logic-4-Bit-Binary-Counter-with-Synchronous-Reset)  
-[74HC164 High Speed CMOS Logic 8-Bit Serial-In/Parallel-Out Shift Register](#74hc164-high-speed-cmos-logic-8-bit-serial-in-parallel-out-shift-register)  
-[74HC165 High Speed CMOS Logic 8-Bit Parallel-In/Serial-Out Shift Register](#74hc165-high-speed-cmos-logic-8-bit-parallel-in-serial-out-shift-register)  
-[74HC595 8 Bit Shift Register With 3 State Output Registers](#74hc595-8-bit-shift-register-with-3-state-output-registers)  

## Details for each Integrated Circuit

#### 74HC125 High Speed CMOS Logic Quad Buffers with 3-State Outputs

#### 74HC126 High Speed CMOS Logic Quad Buffers with 3-State Outputs

#### 74HC132 High Speed CMOS Logic Quad 2-Input Schmitt-Triggered NAND Gates

#### 74HC138 High Speed CMOS Logic 3-to-8 Line Decoder Demultiplexer Inverting and Non-Inverting

#### 74HC139 High Speed CMOS Logic Dual 2-to-4 Line Decoders/Demultiplexers

#### 74HC157 High Speed CMOS Logic Quad 2-Input Multiplexers

#### 74HC163 High Speed CMOS Logic 4-Bit Binary Counter with Synchronous Reset

#### 74HC164 High Speed CMOS Logic 8-Bit Serial-In/Parallel-Out Shift Register

    2 Code pins:
        Data_Pin - Input Data Pin
        Clock_Pin - Clock Pin
    
    -[74HC164 Data Sheet] (./74HC164/74HC_HCT164.pdf)
    [74HC164 Wiring] (74HC164/wiring.png)
    [74HC164 Simple Test Code] (./74HC164/74HC164.ino)
    ![74HC164 Simple Test Video] (./74HC164/20191124_204709.mp4)

#### 74HC165 High Speed CMOS Logic 8-Bit Parallel-In/Serial-Out Shift Register

    3 Code pins:
        SO - Serial output pin
        SH_LD - 
        CLK - Clock Pin
    #### TestCode: Simple Test Code

#### 74HC138 High Speed CMOS Logic 3-to-8 Line Decoder Demultiplexer Inverting/Non-Inverting

#### 74HC132 High Speed CMOS Logic Quad 2-Input Schmitt-Triggered NAND Gates

#### 74HC174 

#### 74HC244 

#### 74HC245 

#### 74HC273 

#### 74HC373 

#### 74HC374 

#### 74HC393 

#### 74HC573 

#### 74HC574 

### 74HC595 8 Bit Shift Register With 3 State Output Registers
    RelayDriver - use of the 74HC595 output shift register, with a relay class build to handle functionality.
    3 Code pins:
        SER_Pin - Serial pin
        RCLK_Pin - Latch pin
        SRCLK_Pin - Clock Pin

    #### TestCode: Code uses a class based approach and no delay function calls.


#### 74HC165 

#### 74HC174 

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.
