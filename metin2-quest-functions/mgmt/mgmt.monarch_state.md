# mgmt.monarch_state()
A função **mgmt.monarch_state** informa информацию об императоре определенной империи.

## Parâmetros da função
### empire_id
Tipo *number*. **Parâmetro obrigatório**. ID do império от `1` до `3`. `1` &mdash; Шиньзо (красная империя); `2` &mdash; Хунджо (желтая империя); `3` &mdash; Джинно (синяя империя).

## Valores de retorno
### player_name
Tipo *mixed*. Se параметр não for um número ou se он меньше 0 ou больше 3, então é retornado `nil`, и последующие значения не возвращаются.

Имя персонажа <sup>string</sup>.

### player_id
Tipo *number*. ID персонажа.

### date
Tipo *string*. O significado deste valor de retorno é desconhecido.

### money
Tipo *number*. O significado deste valor de retorno é desconhecido.

## Notas
A função pode ser chamada anonimamente.