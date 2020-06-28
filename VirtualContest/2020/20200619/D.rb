n = gets.to_i

i = 1
ans = 100

while i * i <= n do
  if n % i == 0
    j = n / i
    t = [i.to_s.length, j.to_s.length].max
    ans = t if ans > t
  end

  i += 1
end

puts ans
