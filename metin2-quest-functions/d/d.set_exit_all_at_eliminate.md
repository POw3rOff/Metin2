# d.set_exit_all_at_eliminate()
Функция **d.set_exit_all_at_eliminate** позволяет серверу запомнить, что при зачистке подземелья всех игроков из него надо будет выбросить.

## Parâmetros da função
### time
Tipo *number*. **Parâmetro obrigatório**. Quantidade de segundos, спустя которое игроки покинут подземелье.

## Notas
A função pode ser chamada anonimamente.

Как и другие eliminate-функции, эта имеет эффект только перед вызовом [d.check_eliminated](../d/d.check_eliminated.md)(). Т.е. сначала вы объявляете, что хотите, чтобы при очистке подземелья игроков выбросило из него, а затем используете функцию [d.check_eliminated](../d/d.check_eliminated.md)() &mdash; там же подробно описана работа eliminate-функций.

Se параметр [time](#time) равен `0`, então телепортация происходит незамедлительно.

Esta função funciona apenas em masmorras.