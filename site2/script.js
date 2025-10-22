function tarefas(){
    let inserir = document.getElementById("inserir");
    let tarefa = inserir.value;
    document.getElementById("mensage").textContent = "Olá, " + tarefa;
    inserir.value ="";

}