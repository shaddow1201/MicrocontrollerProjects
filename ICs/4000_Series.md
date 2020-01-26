# 4000 Series IC's
  This will serve as documentation and, a quick lookup for myself of 4000 Serices IC's that i've investigated.

## Details
I will be following a similar layout as others

- Description
- Data Sheet Link
- Wiring Table
- Simple Arduino Test Code
- Details
  - image of circuit
  - image of Serial Out
  - other images
- Materials
- Notes

### 74HC10 Triple 3-Input Positive-NAND Gates

- Description - The ’HC10 devices contain three independent 3-input NAND gates. They perform the Boolean function Y = (A • B • C)\ or Y = A\ + B\ + C\ in positive logic.
- [74HC10 Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc10.pdf)
- [74HC10 Function Table](74HC10/74HC10_FunctionTable.png)
- 74HC10 Wiring  
  
**Type**|**Arduino Pin**|**IC pin**|**Detail**
-----:|:-----:|:-----:|:-----:
input 1 | 2 | 1 | arduino to IC
input 2 | 3 | 2 | arduino to IC
input 4 | 5 | 3 | arduino to IC
input 5 | 6 | 4 | arduino to IC
input 6 | 7 | 5 | arduino to IC
output 2 | XX | 6 | to LED 2
Gnd | Gnd | 7 | ardunio GND to IC
output 3 | XX | 8 | to LED 3
input 7 | 8 | 9 | arduino to IC
input 8 | 9 | 10 | arduino to IC
input 9 | 10 | 11 | arduino to IC
output 1 | XX | 12 | to LED 1
input 3 | 4 | 13 | arduino to IC
VCC | 5V | 14 | arduino 5v to IC

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.
