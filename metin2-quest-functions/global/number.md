# number()
Функция **number** выбирает случайное целое число в указанном диапазоне.

## Parâmetros da função
### min_value
Tipo *number*. **Parâmetro obrigatório**. Минимальное значение.

### max_value
Tipo *number*. **Parâmetro obrigatório**. Максимальное значение.

## Valores de retorno
### rand
Tipo *number*. Случайное целое число в указанном диапазоне. Se один из параметров не указан ou não for um número, então возвращется `0`.

## Notas
A função pode ser chamada anonimamente.

Функция аналогична встроенной в Lua функции [math.random](../math/math.random.md)().