# horse.ride()
Функция **horse.ride** сажает игрока на лошадь.

## Notas
A função **não** pode ser chamada anonimamente.

Функция не сработает, se игрок мертв, находится в состоянии полиморфа, находится в смокинге ou свадебном платье (ID `11901`, `11902`, `11903`, `11904`), имеет нулевой уровень лошади, сытость лошади равна нулю ([horse.get_health_pct](../horse/horse.get_health_pct.md)()) ou se выносливость лошади равна нулю ([horse.get_stamina_pct](../horse/horse.get_stamina_pct.md)()).