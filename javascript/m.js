let p = [
  { n: 'Mouse', p: 49.90, q: 0 },
  { n: 'Teclado', p: 149.99 ,q:0 },
  { n: 'Monitor', p: 899.50,q:0 }
];
const readlineSync = require('readline-sync')
let r =1
let itemSelecionado=0
let ItemConfirmado = 0
let cont = 0
let valorTotal = 0
let i = 0
do{
    console.log('\nMenu:\n0 - Sair\n1 - Comprar\n2 - Ver carrinho')
    r = parseInt(readlineSync.question(''))
    
      if(r === 1){
        do{
          console.log('Escolha um item')
          p.map((v,i) => console.log( `${i+1}`,'-', v.n,': R$',v.p))
          console.log(`${p.length + 1} - Voltar`)
          
          itemSelecionado= parseInt(readlineSync.question(''))
          if(itemSelecionado === p.length + 1){
            cont = 1
          }
          if(itemSelecionado> 0 && itemSelecionado<= p.length){
          ItemConfirmado =parseInt(readlineSync.question('Confirma o ' + p[itemSelecionado-1].n + ' \n1 - Sim\n2 - Nao\n'))
          if(ItemConfirmado === 1){
            p[itemSelecionado - 1].q++

          }

          }else if(itemSelecionado === p.length){

          }else{
            console.log("Item invalido!")
            cont = 1

          }
        }while(cont === 0)
      }else if(r === 2){
        console.log('\nCarrinho:\n')
        console.log('Nome\tPreço\tQuantidade')
        for( i = 0;i < p.length;i++){
          if(p[i].q > 0){
          console.log(`${p[i].n}\t${p[i].p}\t${p[i].q}`)
          valorTotal+= p[i].p
          }
          
        }
          console.log(`Valor total: ${valorTotal}`)
      }else if(r === 0){

      }else{
        console.log('Digito invalido!')
      }
}while(r != 0)