function tarefas(){
    let inserir = document.getElementById("inserir");
    let tarefa = inserir.value;

    
    let tarefaAdicionada = document.getElementById("ListaTarefa");
    let ListaTarefa = document.createElement("li");
    
    ListaTarefa.textContent = tarefa;
    tarefaAdicionada.appendChild(ListaTarefa);
    inserir.value = "";

}