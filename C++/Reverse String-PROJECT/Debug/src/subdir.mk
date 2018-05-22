################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Reverse\ String-PROJECT.cpp 

OBJS += \
./src/Reverse\ String-PROJECT.o 

CPP_DEPS += \
./src/Reverse\ String-PROJECT.d 


# Each subdirectory must supply rules for building sources it contributes
src/Reverse\ String-PROJECT.o: ../src/Reverse\ String-PROJECT.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Reverse String-PROJECT.d" -MT"src/Reverse\ String-PROJECT.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


