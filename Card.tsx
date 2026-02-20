import type { CardTypes } from "../cardtypes/CardTypes";

export function Card(
    {content,image,price}:CardTypes
)
{return ( <> 
<div>
    {content}
</div>
<div>
    <img src={image} alt="" width={200} height={250}/>
</div>
<div>
    {price.currency} {price.amount}
</div>

</> ) }