################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Returning\ Objects\ from\ functions.cpp 

OBJS += \
./src/Returning\ Objects\ from\ functions.o 

CPP_DEPS += \
./src/Returning\ Objects\ from\ functions.d 


# Each subdirectory must supply rules for building sources it contributes
src/Returning\ Objects\ from\ functions.o: ../src/Returning\ Objects\ from\ functions.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Returning Objects from functions.d" -MT"src/Returning\ Objects\ from\ functions.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


