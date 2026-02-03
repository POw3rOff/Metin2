# __give_empire_priv()
A função **__give_empire_priv** define квоту всем членам определенной империи.

## Parâmetros da função
### empire_id
Tipo *number*. **Parâmetro obrigatório**. ID do império. Se указать `0`, então квота будет дана всем империям.

### priv_id
Tipo *number*. **Parâmetro obrigatório**. ID da quota. `1` &mdash; дроп; `2` &mdash; янги; `3` &mdash; большие кучки янг; `4` &mdash; опыт.

### priv_value
Tipo *number*. **Parâmetro obrigatório**. Qual a percentagem da quota que será definida. Valores superiores a `1000` serão provavelmente reduzidos para `1000`.

### priv_duration
Tipo *number*. **Parâmetro obrigatório**. Длительность квоты em segundos. Valores superiores a `604800` seg. (7 dias), serão provavelmente reduzidos para `604800` секунд.

## Notas
A função pode ser chamada anonimamente.

A quota desaparecerá após o reinício do servidor.