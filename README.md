# Yaroslav Lukyanets IO-01 FICT

*Клонування репозиторію:*
```sh
git clone https://github.com/SergiiPiatakov/calculator
```

![Screenshot](images/1.png?raw=true)

*Заміна місцями комітів:*
```sh
git rebase -i HEAD~2
```

![Screenshot](images/2.png?raw=true)

*Створення двох патчей:*
```sh
git format-patch -2
```

*Поеднання двох комітів та видалення останнього:*
```sh
git rebase -i HEAD~3
```
```
pick 669f632 improve calculation accuracy
squash 1c5a065 fix truncation error
drop 7beabdd formatting: use tabs instead of spaces
```

![Screenshot](images/3.png?raw=true)

*Переіменування поточного віддаленного сховища:*
```sh
git remote rename origin github
```

*Підключення нового віддаленного сховища:*
```sh
git remote add gitlab https://gitlab.com/SergiiPiatakov/calculator
```

*Завантаження даних з `gitlab`:*
```sh
git fetch gitlab
```

*Злиття коміту з `gitlab` до `master`:*
```sh
git cherry-pick gitlab/master~1
```

**!! Скріншот буде після наступної команди !!**

*Створення свої змін та коміт:*
```sh
git commit -m "Added main.cpp and format-patches"
```

![Screenshot](images/4.png?raw=true)

*Підключення до свого репозиторію на github як `origin`:*
```sh
git remote add origin https://github.com/Yarodash/CompArchGitLearn.git
```

*Заливаємо наш репозиторій до серверу:*
```sh
git push -u origin master
```
