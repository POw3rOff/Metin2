# loop_timer()
A função **loop_timer** cria цикличный таймер, привязанный к персонажу.

## Parâmetros da função
### timer_name
Tipo *string*. **Parâmetro obrigatório**. Nome do temporizador. Deve começar com uma letra latina. Pode conter apenas letras latinas, sublinhados e números.

### time
Tipo *number*. **Parâmetro obrigatório**. Quantidade de segundos, após os quais o temporizador será acionado.

## Notas
A função **não** pode ser chamada anonimamente.

Note que após sair do jogo e após o teletransporte, o temporizador será reiniciado.

В отличие от функции [timer](../global/timer.md)(), эта функция вызывает триггер [timer](../_triggers/timer.md) бесконечное количество раз. После того, как на таймере заканчивается время, он запускается по новой.