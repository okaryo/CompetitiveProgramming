n = gets.to_i

chars = ('a'..'z').to_a

ans = ''

t = n
while t > 0 do
  x = t % 26
  ans = chars[x - 1] + ans
  t /= 26

  if x == 0
    t -= 1
  end
end

puts ans
