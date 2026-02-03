# say_in_map()
Функция **say_in_map** отправляет сообщение в квестовом окне всем игрокам в определенной локации.

## Parâmetros da função
### map_index
Tipo *number*. **Parâmetro obrigatório**. Índice do mapa.

### message
Tipo *string*. **Parâmetro obrigatório**. Сообщение в квестовом окне, которое увидят все игроки.

## Notas
A função pode ser chamada anonimamente.

Функционал аналогичен функции [say](../global/say.md)() за тем исключением, что сообщение увидят все игроки на локации.

Скорее всего, разделять строки в этой функции можно только с помощью `[ENTER]` (подробнее тут: [say](../global/say.md)()).