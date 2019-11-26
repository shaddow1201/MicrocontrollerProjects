# Integrated Circuits (IC's)

## IC's and their function.
[74HC595 8 Bit Shift Register With 3 State Output Registers](#74hc595-8-bit-shift-register-with-3-state-output-registers)
[74HC164 High Speed CMOS Logic 8-Bit Serial-In/Parallel-Out Shift Register](#74hc164-high-speed-cmos-logic-8-bit-serial-in-parallel-out-shift-register)
[74HC165 High Speed CMOS Logic 8-Bit Parallel-In/Serial-Out Shift Register](#74hc165-high-speed-cmos-logic-8-bit-parallel-in-serial-out-shift-register)
[74HC138 High Speed CMOS Logic 3-to-8 Line Decoder Demultiplexer Inverting/Non-Inverting](#74hc138-high-speed-cmos-logic-3-to-8-line-decoder-demultiplexer-inverting-non-inverting)
[74HC132 High Speed CMOS Logic Quad 2-Input Schmitt-Triggered NAND Gates](#74hc132-high-speed-cmos-logic-quad-2-input-schmitt-triggered-nand-gates)
[74HC126](#74hc126)

## Details for each Integrated Circuit

### 74HC595 8 Bit Shift Register With 3 State Output Registers
    RelayDriver - use of the 74HC595 output shift register, with a relay class build to handle functionality.
    3 Code pins:
        SER_Pin - Serial pin
        RCLK_Pin - Latch pin
        SRCLK_Pin - Clock Pin

    #### TestCode: Code uses a class based approach and no delay function calls.

#### 74HC164 High Speed CMOS Logic 8-Bit Serial-In/Parallel-Out Shift Register

    2 Code pins:
        Data_Pin - Input Data Pin
        Clock_Pin - Clock Pin
    
    [74HC164 Data Sheet](74HC164/74HC_HCT164.pdf)
    [74HC164 Wiring](74HC164/wiring.png)
    [74HC164 Simple Test Code](./74HC164/74HC164.ino)
    ![74HC164 Simple Test Video](./74HC164/20191124_204709.mp4)

#### 74HC165 High Speed CMOS Logic 8-Bit Parallel-In/Serial-Out Shift Register

    3 Code pins:
        SO - Serial output pin
        SH_LD - 
        CLK - Clock Pin
    #### TestCode: Simple Test Code

#### 74HC138 High Speed CMOS Logic 3-to-8 Line Decoder Demultiplexer Inverting/Non-Inverting

#### 74HC132 High Speed CMOS Logic Quad 2-Input Schmitt-Triggered NAND Gates

#### 74HC126 



## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.
