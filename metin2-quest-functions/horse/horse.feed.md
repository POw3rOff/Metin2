# horse.feed()
A função **horse.feed** aumenta o parâmetro de saciedade do cavalo.

## Notas
A função **não** pode ser chamada anonimamente.

A comida para o cavalo não é gasta ao usar esta função. Mas se quiser forçar os jogadores a gastar comida, para alimentar o cavalo, então terá de a remover manualmente, algo assim:

````lua
local food = horse.get_grade() - 1 + 50054
pc.remove_item(food)
horse.feed()
````