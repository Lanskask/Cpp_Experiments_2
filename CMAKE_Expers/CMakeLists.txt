# Определить переменную VARIABLE со значением "Mr. Thomas":
set(VARIABLE "Mr. Thomas")

# Напечает "His name is: Mr. Thomas":
message("His name is: " ${VARIABLE})

# Напечатает "'BINGO' is equal to: []", так как "BINGO" не определена:
message("'BINGO' is equal to: [${BINGO}]")

# Удалить переменную VARIABLE:
unset(VARIABLE)


message(-------------)

foreach(VARIABLE Give me the sugar please!)
    message(${VARIABLE})
endforeach()


