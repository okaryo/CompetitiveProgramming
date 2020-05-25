n = gets.to_i
a = gets.to_i
b = gets.to_i
c = gets.to_i

t = n
ans = 'YES'

if n == a || n == b || n == c
  ans = 'NO'
end

100.times do
  if t - 3 != a && t - 3 != b && t - 3 != c
    t -= 3
  elsif t - 2 != a && t - 2 != b && t - 2 != c
    t -= 2
  elsif t - 1 != a && t - 1 != b && t - 1 != c
    t -= 1
  else
    ans = 'NO'
    break
  end
end

ans = 'NO' if t > 0

puts ans