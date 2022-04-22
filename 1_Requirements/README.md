# VEHICLE MONITORING SYSTEM
# Introduction:
  Batteries are widely used on many applications as energy source on mobile and portable electronic devices. The battery monitoring system (BMS) is one of main component on electric vehicle. It is used for monitoring voltage, current and temperature of battery during charging or discharging process. There are many researches remote monitoring systems. The microcontroller technology based on based on LCD (LCD) has been developed for monitoring battery on electric vehicle. Other research about microcontroller technology based on embedded technology has been done and applied for battery management system. Embedded technologies a short-range microcontroller technology that operates in inbuilt oscillator  
# Battery:
An electrical battery is one or more electrochemical cells that convert stored chemical energy into electrical energy.. Since the invention of the first battery (or "voltaic pile") in 1800 by Alessandro Volta and especially since the technically improved Daniel cell in 1836, batteries have become a common power source for many household and industrial applications. According to a 2005 estimate, the worldwide battery industry generates US$48 billion in sales each year, with 6% annual growth.
There are two types of batteries: primary batteries (disposable batteries), which are designed to be used once and discarded, and secondary batteries (rechargeable batteries), which are designed to be recharged and used multiple times. Batteries come in many sizes, from miniature cells used to power hearing aids and wristwatches to battery banks the size of rooms that provide standby power for telephone exchanges and computer data centers.
In strict terms, a battery is a collection of multiple electrochemical cells, but in popular usage battery often refers to a single cell.. For example, a 1.5-volt AAA battery is a single 1.5-volt cell, and a 9-volt battery has six 1.5-volt cells in series. The first electrochemical cell was developed by the Italian physicist Alessandro Volta in 1792, and in 1800 he invented the first battery, a "pile" of many cells in series.
# Principle of operation:
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
Installing batteries with different A•h ratings will not affect the operation of a device (except for the time it will work for) rated for a specific voltage unless the load limits of the battery are exceeded. High-drain loads such as digital cameras can result in delivery of less total energy, as happens with alkaline batteries. For example, a battery rated at 2000 mA•h for a 10- or 20-hour discharge would not sustain a current of 1 A for a full two hours as its stated capacity implies.

# Transformer: 
A transformer is an electro-magnetic static device, which transfers electrical energy from one circuit to another, either at the same voltage or at different voltage but at the same frequency.
# Rectifier: 
The function of the rectifier is to convert AC to DC current or voltage. Usually in the rectifier circuit full wave bridge rectifier is used. 
# Filter:  
The Filter is used to remove the pulsated AC. A filter circuit uses capacitor and inductor. The function of the capacitor is to block the DC voltage and bypass the AC voltage. The function of the inductor is to block the AC voltage and bypass the DC voltage.
# Voltage Regulator: 
Voltage regulator constitutes an indispensable part of the power supply section of any electronic systems. The main advantage of the regulator ICs is that it regulates or maintains the output constant, in spite of the variation in the input supply. 
# Voltage Regulation:
Two basic categories of voltage regulation are:
1 line regulation
2 load regulation
# Line Regulation:
The purpose of line regulation is to maintain a nearly constant output voltage when the input voltage varies.
# Load regulation: 
A change in load current (due to a varying RL) has practically no effect on the output voltage of a regulator (within certain limits)
The purpose of load regulation is to maintain a nearly constant output voltage when the load varies.
Load regulation can be defined as the percentage change in the output voltage from no-load (NL) to full-load (FL).
# IC Voltage Regulators:
	Regulation circuits in integrated circuit form are widely used.
	Their operation is no different but they are treated as a single device with associated components.
	These are generally three terminal devices that provide a positive or negative output.
Some types have variable voltage outputs.
	A typical 7800 series voltage regulator is used for positive voltages.
The 7900 series are negative voltage regulators.	These voltage regulators when used with heatsinks can safely produce current values of 1A and greater.
	The capacitors act as line filtration.
Several types of both linear (series and shunt) and switching regulators are available in integrated circuit (IC) form.•	Single IC regulators contain the circuitry for:
	Reference source,
	Comparator amplifier,
	Control device,
	Overload protection
	Generally, the linear regulators are three-terminal devices that provides either positive or negative output voltages that can be either fixed or adjustable
# MICROCONTROLLER – ATMEGA328:

# Features:
 High-performance, Low-power AVR® 8-bit Microcontroller
 Advanced RISC Architecture
 130 Powerful Instructions – Most Single-clock Cycle Execution
 32 x 8 General Purpose Working Registers
 Fully Static Operation
 Up to 16 MIPS Throughput at 16 MHz
 On-chip 2-cycle Multiplier
 High Endurance Non-volatile Memory segments
 8K Bytes of In-System Self-programmable Flash program memory
512 Bytes EEPROM
 1K Byte Internal SRAM
 Write/Erase Cycles: 10,000 Flash/100,000 EEPROM
 Data retention: 20 years at 85°C/100 years at 25°C(1)
 Optional Boot Code Section with Independent Lock Bits
In-System Programming by On-chip Boot Program
True Read-While-Write Operation
 Programming Lock for Software Security
 Peripheral Features
 Two 8-bit Timer/Counters with Separate Prescaler, one Compare Mode
 One 16-bit Timer/Counter with Separate Prescaler, Compare Mode, and Capture 
# Mode
 Real Time Counter with Separate Oscillator
 Three PWM Channels
 8-channel ADC in TQFP and QFN/MLF package
Eight Channels 10-bit Accuracy
 6 channel ADC in PDIP package
Six Channels 10-bit Accuracy
 Byte-oriented Two-wire Serial Interface
 Programmable Serial USART
 Master/Slave SPI Serial Interface
 Programmable Watchdog Timer with Separate On-chip Oscillator
 On-chip Analog Comparator
# Special Microcontroller Features
 Power-on Reset and Programmable Brown-out Detection
 Internal Calibrated RC Oscillator
 External and Internal Interrupt Sources
 Five Sleep Modes: Idle, ADC Noise Reduction, Power-save, Power-down, and Standby
# I/O and Packages
 23 Programmable I/O Lines
 28-lead PDIP, 32-lead TQFP, and 32-pad QFN/MLF
# Operating Voltages
2.7 - 5.5V (ATMEGA328L) 
 4.5 - 5.5V (ATMEGA328)
# Speed Grades
 0 - 8 MHz (ATMEGA328L)
 0 - 16 MHz (ATMEGA328)
# Power Consumption at 4 MHz, 3V, 25°C
 Active: 3.6 mA
 Idle Mode: 1.0 mA
 Power-down Mode: 0.5 µA
# AVR Core: 	
The AVR core combines a rich instruction set with 32 general purpose working registers.  All the32 registers are directly connected to the Arithmetic Logic Unit (ALU), allowing two independent registers to be accessed in one single instruction executed in one clock cycle. The resulting architecture is more code efficient while achieving throughputs up to ten times faster than conventional CISC microcontrollers. The ATMEGA328 provides the following features: 8K bytes of In-System Programmable Flash with Read-While-Write capabilities, 512 bytes of EEPROM, 1K byte of SRAM, 23 general purpose I/O lines, 32 general purpose working registers, three flexible Timer/Counters with compare modes, internal and external interrupts, a serial programmable USART, a byte oriented Two-wire Serial Interface, a 6-channel ADC (eight channels in TQFP and QFN/MLF packages) with10-bit accuracy, a programmable Watchdog Timer with Internal Oscillator, an SPI serial port, and five software selectable power saving modes. The Idle mode stops the CPU while allowing the SRAM; Timer/Counters, SPI port, and interrupt system to continue functioning. The Power-down mode saves the register contents but freezes the Oscillator, disabling all other chip functions until the next Interrupt or Hardware Reset. In Power-save mode, the asynchronous timer continues to run, allowing the user to maintain a timer base while the rest of the device is sleeping. The ADC Noise Reduction mode stops the CPU and all I/O modules except asynchronous timer and ADC, to minimize switching noise during ADC conversions. In Standby mode, the crystal/resonator Oscillator is running while the rest of the device is sleeping. This allows very fast start-up combined with low-power consumption. The device is manufactured using Atmel’s high density non-volatile memory technology. The Flash Program memory can be reprogrammed In-System through an SPI serial interface, by a conventional non-volatile memory programmer, or by an On-chip boot program running on the AVR core. The boot program can use any interface to download the application program in the Application Flash memory. Software in the Boot Flash Section will continue to run while the Application Flash Section is updated, providing true Read-While-Write operation. By combining an 8-bit RISC CPU with In-System Self-Programmable Flash on a monolithic chip, the AtmelATMEGA328 is a powerful microcontroller that provides a highly-flexible and cost-effective solution to many embedded control applications. The ATMEGA328 AVR is supported with a full suite of program and system development tools, including C compilers, macro assemblers, program debugger/simulators, In-Circuit Emulators, and evaluation kits.
# Disclaimer:
	Typical values contained in this datasheet are based on simulations and characterization of other AVR microcontrollers manufactured on the same process technology. 
	Min and Max values will be available after the device is characterized.
# Pin Descriptions:
VCC 	Digital supply voltage.
GND   	Ground.
# Application-specific AVR
o	MegaAVRs with special features not found on the other members of the AVR family, such as LCD controller, USB controller, advanced PWM, CAN etc.
# Features:
Current AVRs offer a wide range of features:
	Multifunction, bi-directional general-purpose I/O ports with configurable, built-in pull-up resistors
	Multiple internal oscillators, including RC oscillator without external parts
	Internal, self-programmable instruction flash memory up to 256 KB (384 KB on X Mega) 
	In-system programmable using serial/parallel low-voltage proprietary interfaces or JTAG
	Optional boot code section with independent lock bits for protection
	On-chip debugging (OCD) support through JTAG or debug WIRE on most devices 
	The JTAG signals (TMS, TDI, TDO, and TCK) are multiplexed on GPIOs. These pins can be configured to function as JTAG or GPIO depending on the setting of a fuse bit, which can be programmed via ISP or HVSP. By default, AVRs with JTAG come with the JTAG interface enabled.
	Debug WIRE uses the /RESET pin as a bi-directional communication channel to access on-chip debug circuitry. It is present on devices with lower pin counts, as it only requires one pin.
	Internal data EEPROM up to 4 KB
	Internal SRAM up to 16 KB (32 KB on X Mega)
	External 64 KB little endian data space on certain models, including the Mega8515 and Mega162. 
	The external data space is overlaid with the internal data space, such that the full 64 KB address space does not appear on the external bus. Accesses to e.g. address 010016 will access internal RAM, not the external bus.
In certain members of the X Mega series, the external data space has been enhanced to support both SRAM and SDRAM. As well, the data addressing modes have been expanded to allow up to 16 MB of data memory to be directly addressed.
	AVRs generally do not support executing code from external memory. Some ASSPs using the AVR core do support external program memory.
	8bit and 16-bit timers 
	PWM output (some devices have an enhanced PWM peripheral which includes a dead-time generator)
	Input capture
	Analog comparator
	10 or 12-bit A/D converters, with multiplex of up to 16 channels
	12-bit D/A converters
	A variety of serial interfaces, including 
	I²C compatible Two-Wire Interface (TWI)
	Synchronous/asynchronous serial peripherals (UART/USART) (used with RS-232, RS-485, and more)	Serial Peripheral Interface Bus (SPI)
	Universal Serial Interface (USI) for two or three-wire synchronous data transfer
	Brownout detection
	Watchdog timer (WDT)
	Multiple power-saving sleep modes
	Lighting and motor control (PWM-specific) controller models
	CAN controller support
	USB controller support 
	Proper full-speed (12 Mbit/s) hardware & Hub controller with embedded AVR.
	Also freely available low-speed (1.5 Mbit/s) (HID) bit banging software emulations
	Ethernet controller support
	LCD controller support
	Low-voltage devices operating down to 1.8 V (to 0.7 V for parts with built-in DC–DC up converter)
	picoPower devices
	DMA controllers and "event system" peripheral communication.
	Fast cryptography support for AES and DES
# Programming interfaces:
	There are many means to load program code into an AVR chip. The methods to program AVR chips vary from AVR family to family.
# ISP:
	The In-system programming (ISP) programming method is functionally performed through SPI, plus some twiddling of the Reset line.
	 As long as the SPI pins of the AVR aren't connected to anything disruptive, the AVR chip can stay soldered on a PCB while reprogramming.
	 All that's needed is a 6-pin connector and programming adapter. This is the most common way to develop with an AVR.
   	The Atmel AVR ISP mkII device connects to a computer's USB port and performs in-system programming using Atmel's software.
	AVRDUDE (AVR DownloderUploaDEr) runs on Linux, FreeBSD, Windows, and Mac OS X, and supports a variety of in-system programming hardware, including Atmel AVR ISP mkII, Atmel JTAG ICE, older Atmel serial-port based programmers, and various third-party and "do-it-yourself" programmers. 
# PDI:
	The Program and Debug Interface (PDI) is an Atmel proprietary interface for external programming and on-chip debugging of XMEGA devices.
	 The PDI supports high-speed programming of all non-volatile memory (NVM) spaces; flash, EEPROM, fuses, lock-bits and the User Signature Row.
	 This is done by accessing the XMEGA NVM controller through the PDI interface, and executing NVM controller commands. 
	The PDI is a 2-pin interface using the Reset pin for clock input (PDI_CLK) and a dedicated data pin (PDI_DATA) for input and output. 
# High voltage:
	High-voltage serial programming (hvsp) is mostly the backup mode on smaller AVRs.
	 An 8-pin AVR package doesn't leave many unique signal combinations to place the AVR into a programming mode.
	 A 12 volt signal, however, is something the AVR should only see during programming and never during normal operation


