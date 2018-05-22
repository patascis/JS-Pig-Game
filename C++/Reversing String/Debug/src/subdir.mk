################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Reversing\ String.cpp 

OBJS += \
./src/Reversing\ String.o 

CPP_DEPS += \
./src/Reversing\ String.d 


# Each subdirectory must supply rules for building sources it contributes
src/Reversing\ String.o: ../src/Reversing\ String.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Reversing String.d" -MT"src/Reversing\ String.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


