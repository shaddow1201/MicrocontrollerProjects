# Integrated Circuits (IC's)
I bought an 'assortment' back of IC in the 74HCXXX hi speed SI-Gate CMOS Logic ICs, and though i'd see if i could put some simple coding together, in an attempt to become 'quickly' familiar with reading tech docs etc, because practice certainly helps in limiting mistakes later on.

## IC's Logic Description, DataSheet, Wiring, Codee, Usage Example, Materials and Notes

### 74HCXXX Series
-[74HC00 High Speed CMOS Logic Quad 2-Input NAND Gates](#74HC00-High-Speed-CMOS-Logic-Quad-2-Input-NAND-Gates)  
-[74HC02 High Speed CMOS Logic Quad 2-Input NOR Gates](#74HC02-High-Speed-CMOS-Logic-Quad-2-Input-NOR-Gates)  
-[74HC04 High Speed CMOS Logic Hex Inverters](#74HC04-High-Speed-CMOS-Logic-Hex-Inverters)  
-[74HC05 Hex Inverters With Open-Drain Outputs](#74HC05-Hex-Inverters-With-Open-Drain-Outputs)  
-[74HC08 High Speed CMOS Logic Quad 2-Input AND Gates](#74HC08-High-Speed-CMOS-Logic-Quad-2-Input-AND-Gates)  
-[74HC10 Triple 3-Input Positive-NAND Gates](#74HC10-Triple-3-Input-Positive-NAND-Gates)  
-[74HC14 Hex Schmitt-Trigger Inverters](#74HC14-Hex-Schmitt-Trigger-Inverters)  
-[74HC21 Dual 4-Input Positive-AND Gates](#74HC21-Dual-4-Input-Positive-AND-Gates)  
-[74HC30 High Speed CMOS Logic 8-Input NAND Gate](#74HC30-High-Speed-CMOS-Logic-8-Input-NAND-Gate)  
-[74HC32 Quadruple 2-Input Positive-OR Gates](#74HC32-Quadruple-2-Input-Positive-OR-Gates)  
-[74HC74 Dual D-Type Positive-Edge-Triggered Flip-Flops With Clear and Preset](#74HC74-Dual-D-Type-Positive-Edge-Triggered-Flip-Flops-With-Clear-and-Preset)  
-[74HC125 High Speed CMOS Logic Quad Buffers with 3-State Outputs](#74HC125-High-Speed-CMOS-Logic-Quad-Buffers-with-3-State-Outputs)  
-[74HC126 High Speed CMOS Logic Quad Buffers with 3-State Outputs](#74HC126-High-Speed-CMOS-Logic-Quad-Buffers-with-3-State-Outputs)  
-[74HC132 High Speed CMOS Logic Quad 2-Input Schmitt-Triggered NAND Gates](#74hc132-high-speed-cmos-logic-quad-2-input-schmitt-triggered-nand-gates)  
-[74HC138 High Speed CMOS Logic 3-to-8 Line Decoder Demultiplexer Inverting/Non-Inverting](#74hc138-high-speed-cmos-logic-3-to-8-line-decoder-demultiplexer-inverting-non-inverting)  
-[74HC139 High Speed CMOS Logic Dual 2-to-4 Line Decoders/Demultiplexers](#74HC139-High-Speed-CMOS-Logic-Dual-2-to-4-Line-Decoders/Demultiplexers)  
-[74HC157 High Speed CMOS Logic Quad 2-Input Multiplexers](#74HC157-High-Speed-CMOS-Logic-Quad-2-Input-Multiplexers)  
-[74HC163 High Speed CMOS Logic 4-Bit Binary Counter with Synchronous Reset](#74HC163-High-Speed-CMOS-Logic-4-Bit-Binary-Counter-with-Synchronous-Reset)  
-[74HC164 High Speed CMOS Logic 8-Bit Serial-In/Parallel-Out Shift Register](#74hc164-high-speed-cmos-logic-8-bit-serial-in-parallel-out-shift-register)  
-[74HC165 High Speed CMOS Logic 8-Bit Parallel-In/Serial-Out Shift Register](#74hc165-high-speed-cmos-logic-8-bit-parallel-in-serial-out-shift-register)  
-[74HC174 High Speed CMOS Logic Hex D-Type Flip-Flops with Reset](#74HC174-High-Speed-CMOS-Logic-Hex-D-Type-Flip-Flops-with-Reset)  
-[74HC244 High Speed CMOS Logic Non-Inverting Octal Buffers/Line Drivers with 3-State Outputs](#74HC244-High-Speed-CMOS-Logic-Non-Inverting-Octal-Buffers-Line-Drivers-with-3-State-Outputs)  
-[74HC245 High Speed CMOS Logic Non-Inverting Octal-Bus Transceivers with 3-State Outputs](#74HC245-High-Speed-CMOS-Logic-Non-Inverting-Octal-Bus-Transceivers-with-3-State-Outputs)  
-[74HC273 High Speed CMOS Logic Octal D-Type Flip-Flops with Reset](#74HC273-High-Speed-CMOS-Logic-Octal-D-Type-Flip-Flops-with-Reset)  
-[74HC373 High Speed CMOS Logic Octal Transparent Latches with 3-State Outputs](#74HC373-High-Speed-CMOS-Logic-Octal-Transparent-Latches-with-3-State-Outputs)  
-[74HC374 High Speed CMOS Logic Octal Positive-Edge-Triggered D-Type Flip-Flops with 3-State Outputs](#74HC374-High-Speed-CMOS-Logic-Octal-Positive-Edge-Triggered-D-Type-Flip-Flops-with-3-State-Outputs)  
-[74HC393 High Speed CMOS Logic Dual 4-Stage Binary Counters](#74HC393-High-Speed-CMOS-Logic-Dual-4-Stage-Binary-Counters)  
-[74HC573 High Speed CMOS Logic Octal Transparent Latches with 3-State Outputs](#74HC573-High-Speed-CMOS-Logic-Octal-Transparent-Latches-with-3-State-Outputs)  
-[74HC574 High Speed CMOS Logic Octal Positive-Edge-Triggered D-Type Flip-Flops with 3-State Outputs](#74HC574-High-Speed-CMOS-Logic-Octal-Positive-Edge-Triggered-D-Type-Flip-Flops-with-3-State-Outputs)  
-[74HC595 8 Bit Shift Register With 3 State Output Registers](#74hc595-8-bit-shift-register-with-3-state-output-registers)  

### Details for each Integrated Circuit

### 74HCXXX Series

#### 74HC00 High Speed CMOS Logic Quad 2-Input NAND Gates

- Description - The SN54HC00 and SN74HC00 devices contain four independent, 2-input NAND gates. They perform the Boolean function Y = A × B or Y = A + B in positive logic.
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- 74HC00 Wiring  

**Type**|**Arduino Pin**|**IC pin**
-----|-----|-----
input 1| 2 | 1
input 2| 3| 2
output 1| XX | 3
input 3| 4| 4
input 4| 5| 5
output 2| XX | 6
Gnd| Gnd | 7
output 3| XX | 8
input 5| 6| 9
input 6| 7| 10
output 4 | XX | 11
input 7| 8| 12
input 8| 9| 13
VCC | 5V | 14

- [74HC00 Simple Test Code](74HC00/74HC00.ino)  

- Materials 
  - Arduino, LEDs, resistors
- Notes - tested first with 8 pin switches, and then tested it with the arduino.
  
#### 74HC02 High Speed CMOS Logic Quad 2-Input NOR Gates

- Description - The SNx4HC02 devices contain four independent 2-input NOR gates. They perform the Boolean function Y = A + B or Y = A • B in positive logic.
- [74HC02 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc02.pdf)
- [74HC02 Wiring]()  
- [74HC02 Simple Test Code]()  
- Materials 
- Notes

#### 74HC04 High Speed CMOS Logic Hex Inverters

- Description - The SNx4HC04 devices contain six independent inverters. They perform the Boolean function Y = A in positive logic.
- [74HC04 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc04.pdf)
- [74HC04 Wiring]()  
- [74HC04 Simple Test Code]()  
- Materials 
- Notes
  
#### 74HC05 Hex Inverters With Open-Drain Outputs

- Description - The SNx4HC05 devices contain six independent inverters. They perform the Boolean function Y = A in positive logic. The open-drain outputs require pullup resistors to perform correctly. They may be connected to other open-drain outputs to implement active-low wired-OR or active-high wired-AND functions.
- [74HC05 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc05.pdf)
- [74HC05 Wiring]()  
- [74HC05 Simple Test Code]()  
- Materials 
- Notes

#### 74HC08 High Speed CMOS Logic Quad 2-Input AND Gates

- Description - The SNx4HC08 devices contain four independent 2-input AND gates. They perform the Boolean function Y = A • B or Y = A + B in positive logic.
- [74HC08 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc08.pdf)
- [74HC08 Wiring]()  
- [74HC08 Simple Test Code]()  
- Materials 
- Notes
  
#### 74HC10 Triple 3-Input Positive-NAND Gates

- Description - The ’HC10 devices contain three independent 3-input NAND gates. They perform the Boolean function Y = (A • B • C)\ or Y = A\ + B\ + C\ in positive logic.
- [74HC10 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc10.pdf)
- [74HC10 Wiring]()  
- [74HC10 Simple Test Code]()  
- Materials 
- Notes
#### 74HC14 Hex Schmitt-Trigger Inverters

- Description - The SNx4HC14 are Schmitt-trigger devices that contain six independent inverters. They perform the Boolean function Y = A in positive logic.
- [74HC14 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc14.pdf)
- [74HC14 Wiring]()  
- [74HC14 Simple Test Code]()  
- Materials 
- Notes

#### 74HC21 Dual 4-Input Positive-AND Gates

- Description - These devices contain two independent 4-input AND gates. They perform the Boolean function Y = A • B • C • D or Y = (A\ + B\ + C\ + D\)\ in positive logic.
- [74HC21 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc21.pdf)
- [74HC21 Wiring]()  
- [74HC21 Simple Test Code]()  
- Materials 
- Notes

#### 74HC30 High Speed CMOS Logic 8-Input NAND Gate

- Description - The ’HC30 and ’HCT30 each contain an 8-input NAND gate in one package. They provide the system designer with the direct implementation of the positive logic 8-input NAND function. Logic gates utilize silicon gate CMOS technology to achieve operating speeds similar to LSTTL gates with the low power consumption of standard CMOS integrated circuits. All devices have the ability to drive 10 LSTTL loads. The HCT logic family is functionally pin compatible with the standard LS logic family.
- [74HC30 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc30.pdf)
- [74HC30 Wiring]()  
- [74HC30 Simple Test Code]()  
- Materials 
- Notes
  
#### 74HC32 Quadruple 2-Input Positive-OR Gates
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC74 Dual D-Type Positive-Edge-Triggered Flip-Flops With Clear and Preset
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC125 High Speed CMOS Logic Quad Buffers with 3-State Outputs
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC126 High Speed CMOS Logic Quad Buffers with 3-State Outputs
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC132 High Speed CMOS Logic Quad 2-Input Schmitt-Triggered NAND Gates
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC138 High Speed CMOS Logic 3-to-8 Line Decoder Demultiplexer Inverting and Non-Inverting
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC139 High Speed CMOS Logic Dual 2-to-4 Line Decoders/Demultiplexers
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC157 High Speed CMOS Logic Quad 2-Input Multiplexers
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC163 High Speed CMOS Logic 4-Bit Binary Counter with Synchronous Reset
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC164 High Speed CMOS Logic 8-Bit Serial-In/Parallel-Out Shift Register

- Description - These 8-bit shift registers feature AND-gated serial inputs and an asynchronous clear (CLR) input. The gated serial (A and B) inputs permit complete control over incoming data; a low at either input inhibits entry of the new data and resets the first flip-flop to the low level at the next clock (CLK) pulse. A high-level input enables the other input, which then determines the state of the first flip-flop. Data at the serial inputs can be changed while CLK is high or low, provided the minimum set-up time requirements are met. Clocking occurs on the low-to-high-level transition of CLK.
- [74HC164 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc164.pdf)
- [74HC164 Wiring](74HC164/wiring.png)  
- [74HC164 Simple Test Code](74HC164/74HC164.ino)  
  -2 Code pins:  
    -Data_Pin - Input Data Pin  
    -Clock_Pin - Serial Clock Pin  
- ![74HC164 Test Video](74HC164/74HC164.mp4)
- Materials
  - arduino, leds, resistors, and wiring.
- Notes: seems a little easier to use than the 75HC595, and can be chained.  

#### 74HC165 High Speed CMOS Logic 8-Bit Parallel-In/Serial-Out Shift Register

- Description - The SNx4HC165 devices are 8-bit parallel-load shift registers that, when clocked, shift the data toward a serial (QH) output. Parallel-in access to each stage is provided by eight individual direct data (A–H) inputs that are enabled by a low level at the shift/load (SH/LD) input. The SNx4HC165 devices also feature a clock-inhibit (CLK INH) function and a complementary serial (QH) output.

  Clocking is accomplished by a low-to-high transition of the clock (CLK) input while SH/LD is held high and CLK INH is held low. The functions of CLK and CLK INH are interchangeable. Because a low CLK and a low-to-high transition of CLK INH also accomplish clocking, CLK INH must be changed to the high level only while CLK is high. Parallel loading is inhibited when SH/LD is held high. While SH/LD is low, the parallel inputs to the register are enabled independently of the levels of the CLK, CLK INH, or serial (SER) inputs.
- [74HC165 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc165.pdf)
- [74HC165 Wiring](74HC165/wiring.JPG)
- [74HC165 Simple Test Code](74HC165/74HC165.ino)
    3 Code pins:
        SO - Serial output pin
        SH_LD - Causes triggering of parallel read
        CLK - Clock Pin
- [74HC165 Output Example](74HC165/dataOutput.png)
- Notes: easy input for high/low digital reads.
  
#### 74HC174 High Speed CMOS Logic Hex D-Type Flip-Flops with Reset
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC244 High Speed CMOS Logic Non-Inverting Octal Buffers/Line Drivers with 3-State Outputs
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC245 High Speed CMOS Logic Non-Inverting Octal-Bus Transceivers with 3-State Outputs
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC273 High Speed CMOS Logic Octal D-Type Flip-Flops with Reset
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC373 High Speed CMOS Logic Octal Transparent Latches with 3-State Outputs
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC374 High Speed CMOS Logic Octal Positive-Edge-Triggered D-Type Flip-Flops with 3-State Outputs
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC393 High Speed CMOS Logic Dual 4-Stage Binary Counters
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC573 High Speed CMOS Logic Octal Transparent Latches with 3-State Outputs
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC574 High Speed CMOS Logic Octal Positive-Edge-Triggered D-Type Flip-Flops with 3-State Outputs
- [74HC00 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc00.pdf)
- [74HC00 Wiring]()  
- [74HC00 Simple Test Code]()  
- Materials 
- Notes
#### 74HC595 8 Bit Shift Register With 3 State Output Registers
- Description - The SNx4HC595 devices contain an 8-bit, serial-in, parallel-out shift register that feeds an 8-bit D-type storage register. The storage register has parallel 3-state outputs. Separate clocks are provided for both the shift and storage register. The shift register has a direct overriding clear (SRCLR) input, serial (SER) input, and serial outputs for cascading. When the output-enable (OE) input is high, the outputs are in the high-impedance state.
- [74HC595 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc595.pdf)
- [74HC595 Wiring]()
- [74HC595 Simple Test Code]()
    3 Code pins:
        SO - Serial output pin
        SH_LD - Causes triggering of parallel read
        CLK - Clock Pin
- [74HC595 Output Example]()
- Notes: easy input for high/low digital reads.
    RelayDriver - use of the 74HC595 output shift register, with a relay class build to handle functionality.
    3 Code pins:
        SER_Pin - Serial pin
        RCLK_Pin - Latch pin
        SRCLK_Pin - Clock Pin
- Materials:


## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.
