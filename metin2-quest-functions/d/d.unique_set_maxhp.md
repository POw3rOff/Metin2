# d.unique_set_maxhp()
A função **d.unique_set_maxhp** altera максимальное здоровье у уникального um monstro.

## Parâmetros da função
### unique_name
Tipo *string*. **Parâmetro obrigatório**. Nome do monstro único.

### max_health
Tipo *number*. **Parâmetro obrigatório**. Количество единиц здоровья, которое будет установлено как максимальное.

## Notas
A função pode ser chamada anonimamente.

После изменения максимального здоровья здоровье um monstro не регенерируется. Представьте, что есть монстр с 5000 единиц здоровья. Вы решou установить ему 10000 единиц здоровья. После вызова функции у um monstro запас здоровья будет не 10000, а 5000, т.е. половина. Чтобы после вызова этой функции у um monstro запас здоровья был равен 10000, надо вызвать функцию [d.unique_set_hp](../d/d.unique_set_hp.md)().

Esta função funciona apenas em masmorras.