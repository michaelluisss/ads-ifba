function tarefas(){
    // Entradas do Usuario
    let inserirLista = document.getElementById("inserirLista");
    let tarefa = inserirLista.value;

    // Criando a lista
    let tarefaAdicionada = document.getElementById("ListaTarefa");
    let ListaTarefa = document.createElement("li");
    
    let texto = "Nada digitado!"
    if(inserirLista.value.trim() === ""){
        
        document.getElementById("mensagem").textContent = texto;
        
        
    }else{
        ListaTarefa.textContent = tarefa;
        tarefaAdicionada.appendChild(ListaTarefa);
        texto = "Tarefa adicionada com sucesso!"
        document.getElementById("mensagem").textContent = texto;
    }
    inserirLista.value = "";

}