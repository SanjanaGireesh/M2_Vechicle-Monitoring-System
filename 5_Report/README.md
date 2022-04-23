# VEHICLE MONITORING SYSTEM
# Abstract:	
Battery Monitoring System for electric vehicle has been developed for monitoring battery level using LCD. It was designed on a low cost microcontroller. Voltage, current aretransferred to microcontroller, and then data of battery is transferred using embedded technology on display. Battery monitoring is displayed on LCD display. The monitoring system was able to show real-time data of voltageand parameters in LCD display simultaneously.
# Introduction:
 Batteries are widely used on many applications as energy source on mobile and portable electronic devices. The battery monitoring system (BMS) is one of main component on electric vehicle. It is used for monitoring voltage, current and temperature of battery during charging or discharging process. There are many researches remote monitoring systems. The microcontroller technology based on based on LCD (LCD) has been developed for monitoring battery on electric vehicle. Other research about microcontroller technology based on embedded technology has been done and applied for battery management system. Embedded technologies a short-range microcontroller technology that operates in inbuilt oscillator
 # Battery
An electrical battery is one or more electrochemical cells that convert stored chemical energy into electrical energy.. Since the invention of the first battery (or "voltaic pile") in 1800 by Alessandro Volta and especially since the technically improved Daniel cell in 1836, batteries have become a common power source for many household and industrial applications. According to a 2005 estimate, the worldwide battery industry generates US$48 billion in sales each year, with 6% annual growth.
There are two types of batteries: primary batteries (disposable batteries), which are designed to be used once and discarded, and secondary batteries (rechargeable batteries), which are designed to be recharged and used multiple times. Batteries come in many sizes; from miniature cells used to power hearing aids and wristwatches to battery banks the size of rooms that provide standby power for telephone exchanges and computer data centers.
The symbol for a battery in a circuit diagram. It originated as a schematic drawing of the earliest type of battery, a voltaic pile. In strict terms, a battery is a collection of multiple electrochemical cells, but in popular usage battery often refers to a single cell.. For example, a 1.5-volt AAA battery is a single 1.5-volt cell, and a 9-volt battery has six 1.5-volt cells in series. The first electrochemical cell was developed by the Italian physicist Alessandro Volta in 1792, and in 1800 he invented the first battery, a "pile" of many cells in series.
# Principle of operation
A voltaic cell for demonstration purposes. In this example the two half-cells are linked by a salt bridge separator that permits the transfer of ions, but not water molecules.
A battery is a device that converts chemical energy directly to electrical energy. It consists of a number of voltaic cells; each voltaic cell consists of two half-cells connected in series by a conductive electrolyte containing anions and cations. One half-cell includes electrolyte and the electrode to which anions (negatively charged ions) migrate, i.e., the anode or negative electrode; the other half-cell includes electrolyte and the electrode to which cations (positively charged ions) migrate, i.e., the cathode or positive electrode. In the redox reaction that powers the battery, cations are reduced (electrons are added) at the cathode, while anions are oxidized (electrons are removed) at the anode. The electrodes do not touch each other but are electrically connected by the electrolyte. Some cells use two half-cells with different electrolytes. A separator between half-cells allows ions to flow, but prevents mixing of the electrolytes.
Each half-cell has an electromotive force (or emf), determined by its ability to drive electric current from the interior to the exterior of the cell. The net emf of the cell is the difference between the emfs of its half-cells, as first recognized by Volta. Therefore, if the electrodes have emfs  and , then the net emf is ; in other words, the net emf is the difference between the reduction potentials of the half-reactions.
# Battery capacity and discharging:
A device to check battery voltage.
A battery's capacity is the amount of electric charge it can store. The more electrolyte and electrode material there is in the cell the greater the capacity of the cell. A small cell has less capacity than a larger cell with the same chemistry, and they develop the same open-circuit voltage. 
Because of the chemical reactions within the cells, the capacity of a battery depends on the discharge conditions such as the magnitude of the current (which may vary with time), the allowable terminal voltage of the battery, temperature, and other factors. The available capacity of a battery depends upon the rate at which it is discharged. If a battery is discharged at a relatively high rate, the available capacity will be lower than expected.
The capacity printed on a battery is usually the product of 20 hours multiplied by the constant current that a new battery can supply for 20 hours at 68 F° (20 C°), down to a specified terminal voltage per cell. A battery rated at 100 A•h will deliver 5 A over a 20-hour period at room temperature. However, if discharged at 50 A, it will have a lower capacity. 
The relationship between current, discharge time, and capacity for a lead acid battery is approximated (over a certain range of current values) 
For low values of I internal self-discharge must be included.
Internal energy losses and limited rate of diffusion of ions through the electrolyte cause the efficiency of a real battery to vary at different discharge rates. When discharging at low rate, the battery's energy is delivered more efficiently than at higher discharge rates, but if the rate is very low, it will partly self-discharge during the long time of operation, again lowering its efficiency.
Installing batteries with different A•h ratings will not affect the operation of a device (except for the time it will work for) rated for a specific voltage unless the load limits of the battery are exceeded. High-drain loads such as digital cameras can result in delivery of less total energy, as happens with alkaline batteries.For example, a battery rated at 2000 mA•h for a 10- or 20-hour discharge would not sustain a current of 1 A for a full two hours as its stated capacity implies.
# Transformer:
A transformer is an electro-magnetic static device, which transfers electrical energy from one circuit to another, either at the same voltage or at different voltage but at the same frequency.
# Rectifier: 
The function of the rectifier is to convert AC to DC current or voltage. Usually in the rectifier circuit full wave bridge rectifier is used. 
# Filter: 
The Filter is used to remove the pulsated AC. A filter circuit uses capacitor and inductor. The function of the capacitor is to block the DC voltage and bypass the AC voltage. The function of the inductor is to block the AC voltage and bypass the DC voltage.
# Voltage Regulator: 
Voltage regulator constitutes an indispensable part of the power supply section of any electronic systems. The main advantage of the regulator ICs is that it regulates or maintains the output constant, in spite of the variation in the input supply. 
# Voltage Regulation
	Two basic categories of voltage regulation are:
	line regulation
  load regulation
# Types of Regulator:
	Fundamental classes of voltage regulators are linear regulators and switching regulators.
	Two basic types of linear regulator are the series regulator and the shunt regulator.
	The series regulator is connected in series with the load and the shunt regulator is connected in parallel with the load.
# IC Voltage Regulator
        Regulation circuits in integrated circuit form are widely used.
	Their operation is no different but they are treated as a single device with associated components.
	These are generally three terminal devices that provide a positive or negative output.
	Some types have variable voltage outputs.
	A typical 7800 series voltage regulator is used for positive voltages.•	The 7900 series are negative voltage regulators.
	These voltage regulators when used with heatsinks can safely produce current values of 1A and greater.
	The capacitors act as line filtration.
	Several types of both linear (series and shunt) and switching regulators are available in integrated circuit (IC) form.
	Single IC regulators contain the circuitry for:
	Reference source
	Comparator amplifier
	Control device
	Overload protection
	Generally, the linear regulators are three-terminal devices that provides either positive or negative output voltages that can be either fixed or adjustable

# Fixed Voltage Regulator:
	The fixed voltage regulator has an unregulated dc input voltage Vi applied to one input terminal, a regulated output dc voltage Vo from a second terminal, and the third terminal connected to ground.
	The series 78XX regulators are the three-terminal devices that provide a fixed positive output voltage.
  An unregulated input voltage Vi is filtered by a capacitor C1 and connected to the IC’s IN terminal.
	The IC’s OUT terminal provides a regulated +12 V, which is filtered by capacitor C2.
	The third IC terminal is connected to ground (GND)
  Voltage regulators keep a constant dc output despite input voltage or load changes.
	The two basic categories of voltage regulators are linear and switching.
	The two types of linear voltage regulators are series and shunt.
	The three types of switching are step-up, step-down, and inverting.
	Switching regulators are more efficient than linear making them ideal for low voltage high current applications.
	IC regulators are available with fixed positive or negative output voltages or variable negative or positive output voltages.
	Both linear and switching type regulators are available in IC form.
	Current capacity of a voltage regulator can be increased with an external pass transistor

# MICROCONTROLLER – ATMEGA328:

# Features
 High-performance, Low-power AVR® 8-bit Microcontroller
 Advanced RISC Architecture
– 130 Powerful Instructions – Most Single-clock Cycle Execution
– 32 x 8 General Purpose Working Registers
– Fully Static Operation
– Up to 16 MIPS Throughput at 16 MHz
– On-chip 2-cycle Multiplier
 High Endurance Non-volatile Memory segments
– 8K Bytes of In-System Self-programmable Flash program memory
– 512 Bytes EEPROM
– 1K Byte Internal SRAM
– Write/Erase Cycles: 10,000 Flash/100,000 EEPROM
– Data retention: 20 years at 85°C/100 years at 25°C(1)
– Optional Boot Code Section with Independent Lock Bits
In-System Programming by On-chip Boot Program
True Read-While-Write Operation
– Programming Lock for Software Security
 # Peripheral Features
– Two 8-bit Timer/Counters with Separate Prescaler, one Compare Mode
– One 16-bit Timer/Counter with Separate Prescaler, Compare Mode, and Capture 
Mode
– Real Time Counter with Separate Oscillator
– Three PWM Channels
– 8-channel ADC in TQFP and QFN/MLF package
# Eight Channels 10-bit Accuracy
– 6-channel ADC in PDIP package
# Six Channels 10-bit Accuracy
– Byte-oriented Two-wire Serial Interface
– Programmable Serial USART
– Master/Slave SPI Serial Interface
– Programmable Watchdog Timer with Separate On-chip Oscillator
– On-chip Analog Comparator
# Special Microcontroller Features
– Power-on Reset and Programmable Brown-out Detection
– Internal Calibrated RC Oscillator
– External and Internal Interrupt Sources
– Five Sleep Modes: Idle, ADC Noise Reduction, Power-save, Power-down, and Standby
# I/O and Packages
– 23 Programmable I/O Lines
– 28-lead PDIP, 32-lead TQFP, and 32-pad QFN/MLF
 # Operating Voltages
– 2.7 - 5.5V (ATMEGA328L) 
– 4.5 - 5.5V (ATMEGA328)
 # Speed Grades
– 0 - 8 MHz (ATMEGA328L)
– 0 - 16 MHz (ATMEGA328)
 # Power Consumption at 4 MHz, 3V, 25°C
– Active: 3.6 mA
– Idle Mode: 1.0 mA
– Power-down Mode: 0.5 µA

# AVR Core: 
The AVR core combines a rich instruction set with 32 general purpose working registers.  All the32 registers are directly connected to the Arithmetic Logic Unit (ALU), allowing two independent registers to be accessed in one single instruction executed in one clock cycle. The resulting architecture is more code efficient while achieving throughputs up to ten times faster than conventional CISC microcontrollers. The ATMEGA328 provides the following features: 8K bytes of In-System Programmable Flash with Read-While-Write capabilities, 512 bytes of EEPROM, 1K byte of SRAM, 23 general purpose I/O lines, 32 general purpose working registers, three flexible Timer/Counters with compare modes, internal and external interrupts, a serial programmable USART, a byte oriented Two-wire Serial Interface, a 6-channel ADC (eight channels in TQFP and QFN/MLF packages) with10-bit accuracy, a programmable Watchdog Timer with Internal Oscillator, an SPI serial port, and five software selectable power saving modes. The Idle mode stops the CPU while allowing the SRAM; Timer/Counters, SPI port, and interrupt system to continue functioning. The Power-down mode saves the register contents but freezes the Oscillator, disabling all other chip functions until the next Interrupt or Hardware Reset. In Power-save mode, the asynchronous timer continues to run, allowing the user to maintain a timer base while the rest of the device is sleeping. The ADC Noise Reduction mode stops the CPU and all I/O modules except asynchronous timer and ADC, to minimize switching noise during ADC conversions. In Standby mode, the crystal/resonator Oscillator is running while the rest of the device is sleeping. This allows very fast start-up combined with low-power consumption. The device is manufactured using Atmel’s high density non-volatile memory technology. The Flash Program memory can be reprogrammed In-System through an SPI serial interface, by a conventional non-volatile memory programmer, or by an On-chip boot program running on the AVR core. The boot program can use any interface to download the application program in the Application Flash memory. Software in the Boot Flash Section will continue to run while the Application Flash Section is updated, providing true Read-While-Write operation. By combining an 8-bit RISC CPU with In-System Self-Programmable Flash on a monolithic chip, the AtmelATMEGA328 is a powerful microcontroller that provides a highly-flexible and cost-effective solution to many embedded control applications. The ATMEGA328 AVR is supported with a full suite of program and system development tools, including C compilers, macro assemblers, program debugger/simulators, In-Circuit Emulators, and evaluation kits.

# Pin Descriptions:
VCC 	Digital supply voltage.
GND   	Ground.

# Port B (PB7..PB0) 
# XTAL1/XTAL2/TOSC1/TOSC2
•	Port B is an 8-bit bi-directional I/O port with internal pull-up resistors (selected for each bit). 
•	The Port B output buffers have symmetrical drive characteristics with both high sink and source capability. 
•	As inputs, Port B pins that are externally pulled low will source current if the pull-up resistors are activated. 
•	The Port B pins are tri-stated when a reset condition becomes active, even if the clock is not running.
•	 Depending on the clock selection fuse settings, PB6 can be used as input to the inverting Oscillator amplifier and input to the internal clock operating circuit. 
•	Depending on the clock selection fuse settings, PB7 can be used as output from the inverting Oscillator amplifier.
•	 If the Internal Calibrated RC Oscillator is used as chip clock source, PB7..6 is used as TOSC2..1input for the Asynchronous Timer/Counter2 if the AS2 bit in ASSR is set.
# Port C (PC5..PC0)	
•	Port C is a 7-bit bi-directional I/O port with internal pull-up resistors (selected for each bit).
•	 The Port C output buffers have symmetrical drive characteristics with both high sink and source capability. 
•	As inputs, Port C pins that are externally pulled low will source current if the pull-up resistors are activated.
•	 The Port C pins are tri-stated when a reset condition becomes active, even if the clock is not running.
# PC6/RESET			
•	If the RSTDISBL Fuse is programmed, PC6 is used as an I/O pin. 
•	Note that the electrical characteristics of PC6 differ from those of the other pins of Port C. 
•	If the RSTDISBL Fuse is un programmed, PC6 is used as a Reset input.
•	 A low level on this pin for longer than the minimum pulse length will generate a Reset, even if the clock is not running. 
•	Shorter pulses are not guaranteed to generate a Reset.
# Port D (PD7..PD0)		
•	Port D is an 8-bit bi-directional I/O port with internal pull-up resistors (selected for each bit). 
•	The Port D output buffers have symmetrical drive characteristics with both high sink and source capability.
•	 As inputs, Port D pins that are externally pulled low will source current if the pull-up resistors are activated.
•	 The Port D pins are tri-stated when a reset condition becomes active, even if the clock is not running.
# RESET 			
•	Reset input. A low level on this pin for longer than the minimum pulse length will generate a reset, even if the clock is not running. 
•	Shorter pulses are not guaranteed to generate a reset.
# AVCC 			
•	AVCC is the supply voltage pin for the A/D Converter, Port C (3..0), and ADC (7..6). It should be externally connected to VCC, even if the ADC is not used. 
•	If the ADC is used, it should be connected to VCC through a low-pass filter. Note that Port C (5..4) use digital supply voltage, VCC.
# AREF	
•	AREF is the analog reference pin for the A/D Converter.

# ADC7..6 (TQFP and QFN/MLF Package Only)		
•	In the TQFP and QFN/MLF package, ADC7..6 serve as analog inputs to the A/D converter. These pins are powered from the analog supply and serve as 10-bit ADC channels
# 4 LCD:
•	A liquid crystal display (LCD) is a thin, flat display device made up of any number of color or monochrome pixels arrayed in front of a light source or reflector.
•	 Each pixel consists of a column of liquid crystal molecules suspended between two transparent electrodes, and two polarizing filters, the axes of polarity of which are perpendicular to each other.
•	 Without the liquid crystals between them, light passing through one would be blocked by the other. 
•	The liquid crystal twists the polarization of light entering one filter to allow it to pass through the other.










