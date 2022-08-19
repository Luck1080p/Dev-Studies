# Alura-Git-Github

# https://www.alura.com.br/curso-online-git-github-repositorio-commit-versoes

- É uma ferramenta na qual é compartilhado os codigos de forma pratica através de arquivos sendo possível navegar entre as versões diferentes do codigo, comentar, e extrair e empurar as modificacoes realizadas no repositorio (local onde ficara os arquivos)
- Repositorio é como se fosse uma pasta na qual iremos armazenar os arquivos de codigo
    - repo.new
- GitHub é uma das principais plataformas de compartilhamento de codigo
    - Podemos deixar o codigo publico ou privado
    - Podemos criar um novo arquivo
    - .md → markdown → linguagem de estruturaćão e estilos
    - readme → primeiro arquivo no qual aponta as especificaćões de um projeto, tudo relacionado a configuraćão e estruturaćão do mesmo, poremos colocar o status do projeto
    
  > Commit → rotulo ou comentario obrigatorio da alteraćão realizada 
  - Um commit guarda o estado do seu projeto naquele momento. 
  
- Através dos commits podemos acompanhar as versões e alterećões realizadas no codigo
- Com o GitHub, a equipe de devs poderá gerenciar muito mais facilmente as alterações no projeto. Um repositório é basicamente um diretório onde ficarão reunidos todos os arquivos do projeto e poderá ser acessado por todas as pessoas da equipe.
- No readme, você pode dar uma descrição sobre o que é o seu projeto, qual o status atual dele, as tecnologias utilizadas, o time que trabalha no desenvolvimento, como contribuir (se for open source), como usar, etc. Existe uma grande possibilidade de coisas que você pode colocar no seu readme com a finalidade de informar e ser mais atrativo e organizado possível para quem estiver visualizando seu projeto.

> https://www.alura.com.br/artigos/como-trabalhar-com-markdown

> https://www.alura.com.br/artigos/escrever-bom-readme

> Através do github podemos localizar todas as alterações realizadas no codigo

- Nas configurações do respositorio > colaboradores > podemos adicionar pessoas para que possam fazer alterações no codigo 
- Linus Torvalds criador do linux foi o responsavel por criar o git
- Github pertence a MS 
- Comandos do git:
    - Git clone + Url - Puxa o repositorio (pasta do projeto em sí)
    - Code .  - irá abrir o VsCode
    - Git log - Irá mostrar todo o historico de mudanças
    - Git log --oneline - mostra os commits de forma mais organizada
    - Para cada commit é gerado um id no qual servira para puxarmos posteriormente
    - Git pull - faz atualizações nos arquivos caso tenha havido alterações
    - Git status - mostra as modificações
    - Git commit -m - coloca uma mensagem
    - Git commit "colocamos o arquivo" -m - colocamos a mensagem do commit
    - Git push - "empurra" todos os commits no repositorio para o main
            - Git push only "nome do arquivo"- empurra apenas o arquivo em especifico
            - Git push only main
    - Git restore --source + numero do commit - restaura o codigo na versão anterior
    
    > Podemos criar uma nova branch (ramificação) além da main, para que a parte de desenvolvimento não atrapalhe a integração continua
        - Git checkout -b "nome da branch"
        - Realize as alterações, de o commit e o add
        - Git push oring "nome da branch"
    > Podemos alterar entre as branchs com o git switch "nome da branch" para att o repositorio 
    > Para mesclarmos vamos para a branch na qual queremos mesclar (se fizemos alterações na branch dev, vamos para a main para mesclarmos a dev) 
    > Em seguida usamos o comando git merge "nome da brench"
    
