# server_loop_timer()
A função **server_loop_timer** cria цикличный серверный таймер.

## Parâmetros da função
### timer_name
Tipo *string*. **Parâmetro obrigatório**. Nome do temporizador. Deve começar com uma letra latina. Pode conter apenas letras latinas, sublinhados e números.

### time
Tipo *number*. **Parâmetro obrigatório**. Quantidade de segundos, após os quais o temporizador será acionado.

### argument
Tipo *number*. Argumento que será passado para o temporizador. Este argumento pode ser obtido a partir do gatilho [server_timer](../_triggers/server_timer.md) usando a função [get_server_timer_arg](../global/get_server_timer_arg.md)(). Por defeito, o argumento é igual a `0`.

## Notas
A função pode ser chamada anonimamente.

В отличие от функции [server_timer](../global/server_timer.md)(), эта функция вызывает триггер [server_timer](../_triggers/server_timer.md) бесконечное количество раз. После того, как на таймере заканчивается время, он запускается по новой.

Leia os detalhes sobre o funcionamento do temporizador do servidor no artigo sobre o gatilho [server_timer](../_triggers/server_timer.md).

Note que o temporizador não pode chamar a si mesmo. ou seja, esta construção causará um erro:

````lua
when login begin
	server_loop_timer("example", 3)
end

when example.server_timer begin
	server_loop_timer("example", 3)
end
````