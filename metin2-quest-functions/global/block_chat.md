# block_chat()
Функция **block_chat** блокирует чат определенному игроку на определенное время.

## Parâmetros da função
### player_name
Tipo *string*. **Parâmetro obrigatório**. Nome do jogador, чей чат будет заблокирован.

### duration
Tipo *string*. **Parâmetro obrigatório**. Длительность. Указывается длительность так: `45s` &mdash; se надо заблокировать на 45 секунд; `45m` &mdash; 45 минут; `45h` &mdash; 45 часов; `45d` &mdash; 45 дней.

## Valores de retorno
### status
Tipo *boolean*. Статус выполнения функции. `false`, se один из параметров не является строкой ou se функция была вызвана от имени сервера и `true`, se функция была выполнена успешно.

## Notas
A função **não** pode ser chamada anonimamente.