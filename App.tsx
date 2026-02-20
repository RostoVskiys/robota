import "./App.css"
import { Card } from "./card/Card"
import "./cardtypes/CardTypes"

function App() {
  return (
    <Card
      content="booc1"
      image="https://encrypted-tbn0.gstatic.com/shopping?q=tbn:ANd9GcQX0uDdjwGjjpgkGKDyWcOZx18EEZzxMx6GC5drLnTpc5rlontO9wafD6oy8vCsYcDZn_0hWykV2JrX6u0n_uljc6TGzSiJblglebyOeNo4Cgurb5X920xSWI_2&usqp=CAc" 
      price={{amount: 1000, currency: "UAH"}}
    />
  )
}

export default App