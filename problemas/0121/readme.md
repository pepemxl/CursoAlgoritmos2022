# Mejor momento para comprar y vender acciones

Se le da una matriz de precios `prices` donde `precios[i]` es el precio de una acción determinada en el i-ésimo día.

Se desea maximizar sus ganancias eligiendo un solo día para comprar una acción y eligiendo un día diferente en el futuro para vender esa acción.

Devuelva la máxima ganancia que pueda obtener de esta transacción. Si no puede obtener ningún beneficio, devuelva 0.

Por ejempplo:

- Input: `prices = [8,1,5,4,2,3]`
- Output: 4

Explicación: Comprar el día 2 donde el precio es 1 y vender en el día 3 donde el precio es 5 nos da una ganancia = 5-1=4.

Condiciones:

- `1 <= prices.length <= 105`
- `0 <= prices[i] <= 104`

## Solución

Necesitamos encontrar la maxima diferencia, la cual tendra por lo tanto la ganancia maxima que podremos conseguir. Con la condición de que el segundo número será mayor que el primero.

Esto es, enontrar $$\max_{j>i}⁡(prices[j]−prices[i])$$

### Opción 1 Fuerza Bruta

Para cada $i$ calculamos todos los valores `prices[j]−prices[i]` para $j>i$. Esto tiene complejidad $O(n^2)$ ya que realizaremos $\frac{n\cdot (n-1)}{2}$ operaciones, con complejidad espacial $O(1)$, por que realmente no necesitamos usar memoria extra, más que para acarrear el máximo.

### Opción 2

Ahora lo que haremos será mantener un minimo temporal, y cada vez que encontremos un minimo más pequeño actualizaremos el minimo, esto se realizará por lo tanto con una complejidad $O(n)$. Como solo necesitamo agregar otra variable, la complejidad espacial sigue siendo $O(1)$.