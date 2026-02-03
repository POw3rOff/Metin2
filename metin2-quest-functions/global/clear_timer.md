# clear_timer()
Функция **clear_timer** обнуляет таймер, привязанный к персонажу.

## Parâmetros da função
### timer_name
Tipo *string*. **Parâmetro obrigatório**. Nome do temporizador.

## Notas
A função **não** pode ser chamada anonimamente.

Другими словами, обнуление серверного таймера значит, что триггер [timer](../_triggers/timer.md) не сработает.