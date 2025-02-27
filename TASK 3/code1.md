#### 1. Instruction: `LUI a2, 0x1` 
   - **Address:** `100b0`.
   - **Hexadecimal:** `00001637`.
   - **Type:** U-type (LUI).
   - **Opcode:** `0110111`. 
   - **Meaning:** Load the upper 20 bits of the immediate `0x1` into `a2`.

#### 2. Instruction: `AUIPC sp, 0x2`
   - **Address:** `100b4`
   - **Hexadecimal:** `00002117`.  
   - **Type:** U-type (AUIPC). 
   - **Opcode:** `0010111`.  
   - **Meaning:** Add the upper 20 bits of `0x2` to the program counter and store in `sp`.

#### 3. Instruction: `ADDI a0, sp, -16` 
   - **Address:** `100b8`.
   - **Hexadecimal:** `FF011513`.
   - **Type:** I-type (ADDI).
   - **Opcode:** `0010011`.
   - **Meaning:** Add the immediate value `-16` to `sp` and store the result in `a0`.

#### 4. Instruction: `ADDI a2, zero, 132`
   - **Address:** `100bc`. 
   - **Hexadecimal:** `08400613`.  
   - **Type:** I-type (ADDI).  
   - **Opcode:** `0010011`. 
   - **Meaning:** Load the immediate value `132` into `a2`.

#### 5. Instruction: `ADDI a0, a0, 384`
   - **Address:** `100c0`.  
   - **Hexadecimal:** `18055113`.  
   - **Type:** I-type (ADDI).  
   - **Opcode:** `0010011`. 
   - **Meaning:** Add the immediate value `384` to the value in `a0`.

#### 6. Instruction: `SD a0, 8(sp)`
   - **Address:** `100c4`.    
   - **Hexadecimal:** `00113423`.  
   - **Type:** S-type (SD).  
   - **Opcode:** `0100011`.  
   - **Meaning:** Store the value in `a0` at memory location `sp + 8`.

#### 7. Instruction: `JAL ra, <printf>` 
   - **Address:** `100c8`. 
   - **Hexadecimal:** `340000EF`.  
   - **Type:** J-type (JAL).  
   - **Opcode:** `1101111`.  
   - **Meaning:** Jump to the address of the `printf` function and store the return address in `ra`.

#### 8. Instruction: `RET` 
   - **Address:** `100cc`.    
   - **Hexadecimal:** `00008067`.  
   - **Type:** I-type (JALR).  
   - **Opcode:** `1100111`.  
   - **Meaning:** Return to the caller by jumping to the address in `ra`.

#### 9. Instruction: `AUIPC a5, 0xFFFFF`
   - **Address:** `100e0`.  
   - **Hexadecimal:** `FFF00797`.  
   - **Type:** U-type (AUIPC).  
   - **Opcode:** `0010111`.  
   - **Meaning:** Add the upper 20 bits of `0xFFFFF` to the program counter and store in `a5`.

#### 10. Instruction: `ADDI a5, a5, -224`
   - **Address:** `100e4`.  
   - **Hexadecimal:** `F2078793`.  
   - **Type:** I-type (ADDI).  
   - **Opcode:** `0010011`.  
   - **Meaning:** Add the immediate value `-224` to the value in `a5`.

#### 11. **Instruction:** `BEQ a5, zero, <target>` 
   - **Address:** `100e8`.    
   - **Hexadecimal:** `00078063`.  
   - **Type:** B-type (BEQ).  
   - **Opcode:** `1100011`.  
   - **Meaning:** Branch to `<target>` if `a5` equals `0`.

#### 12. Instruction: `AUIPC a0, 0x5`
   - **Address:** `100ec`.    
   - **Hexadecimal:** `00050517`.  
   - **Type:** U-type (AUIPC).  
   - **Opcode:** `0010111`.  
   - **Meaning:** Add the upper 20 bits of `0x5` to the program counter and store in `a0`.

#### 13. **Instruction:** `ADDI a0, a0, 272` 
   - **Address:** `100f0`.   
   - **Hexadecimal:** `11055113`.  
   - **Type:** I-type (ADDI).  
   - **Opcode:** `0010011`.  
   - **Meaning:** Add the immediate value `272` to the value in `a0`.

#### 14. **Instruction:** `ADDI gp, gp, -1780` 
   - **Address:** `10104`.  
   - **Hexadecimal:** `9C181293`.  
   - **Type:** I-type (ADDI).  
   - **Opcode:** `0010011`.  
   - **Meaning:** Add the immediate value `-1780` to the value in `gp`.

#### 15. **Instruction:** `AUIPC gp, 0x13`
   - **Address:** `10100`.   
   - **Hexadecimal:** `00013197`.  
   - **Type:** U-type (AUIPC).  
   - **Opcode:** `0010111`.  
   - **Meaning:** Add the upper 20 bits of `0x13` to the program counter and store in `gp`.
