-- Trabalho 1 NASM / Grupo 7 --

Membros do grupo:

Alvaro Torres Vieira  		14/0079661  (macro while-do)
Felipe da Costa Malaquias	13/0044440  (macro if/else e lfsr em NASM)
Jefferson Viana Fonseca		13/0028959  (macro do-while e lfsr em C)
Matheus de Oliveira Vieira	13/0126420  (macro switch)
Rafael Dias da Costa	 	12/0133253  (macro for e lfsr em C)

A participação de trabalho de cada membro foi registrada no comentário de cada arquivo.

Para a divisão de tarefas, utilizamos um sorteio aleatório via random.org e delegamos uma 
macro para cada integrante (Questão 1), e na Questão 2 apenas nos reunimos e fizemos em 
paralelo.

Todos os arquivos contém informações de compilação/geração de objeto.

Para gerar objeto dos arquivos das macros:

nasm -f elf arquivoMacro.asm

Para gerar objeto da biblioteca asm_io do Carter:

nasm -f elf -d ELF_TYPE asm_io.asm  (Caso use Linux. Se não, ver comentários no arquivo asm_io.asm)

Para compilar e executar os códigos da Questão 2, favor verificar comentários nos arquivos lfsr-c.c e lfsr-nasm.asm.



