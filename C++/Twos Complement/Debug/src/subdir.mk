################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Twos\ Complement.cpp 

OBJS += \
./src/Twos\ Complement.o 

CPP_DEPS += \
./src/Twos\ Complement.d 


# Each subdirectory must supply rules for building sources it contributes
src/Twos\ Complement.o: ../src/Twos\ Complement.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Twos Complement.d" -MT"src/Twos\ Complement.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


