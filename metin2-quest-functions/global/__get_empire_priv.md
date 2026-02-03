# __get_empire_priv()
A função **__get_empire_priv** informa количество процентов определенной квоты у определенной империи.

## Parâmetros da função
### empire_id
Tipo *number*. **Parâmetro obrigatório**. ID do império. Se especificar `0`, será exibida apenas a informação sobre a quota, que se aplica a todos os impérios de uma vez.

### priv_id
Tipo *number*. **Parâmetro obrigatório**. ID da quota. `1` &mdash; дроп; `2` &mdash; янги; `3` &mdash; большие кучки янг; `4` &mdash; опыт.

## Valores de retorno
### priv_value
Tipo *number*. Количество процентов квоты. Se один из параметров não for um número, se были заданы не все параметры ou se был задан неверный ID do império, então é retornado `0`.

## Notas
A função pode ser chamada anonimamente.