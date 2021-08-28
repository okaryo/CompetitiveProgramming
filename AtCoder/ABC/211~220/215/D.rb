def prime_division(x)
  res = []
  i = 2
  while i*i <= x do
    while x % i == 0 do
      x /= i
      res << i
    end
    i += 1
  end
  if x != 1
    res << x
  end
  return res
end

N,M = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)
check = Array.new(M+1, true)
A.each do |ai|
  p = prime_division(ai)
  p.each do |v|
    if check[v]
      t = v
      while t <= M do
        check[t] = false
        t += v
      end
    end
  end
end
ans = []
1.upto(M) do |i|
  if check[i]
    ans << i
  end
end
puts(ans.size)
puts(ans)
