################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Prototypes\ and\ Includes.cpp 

OBJS += \
./src/Prototypes\ and\ Includes.o 

CPP_DEPS += \
./src/Prototypes\ and\ Includes.d 


# Each subdirectory must supply rules for building sources it contributes
src/Prototypes\ and\ Includes.o: ../src/Prototypes\ and\ Includes.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Prototypes and Includes.d" -MT"src/Prototypes\ and\ Includes.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


