N = gets.to_i
t = N
ans = ''
while t > 0 do
  if t % 2 == 0
    ans = 'B' + ans
    t /= 2
  else
    ans = 'A' + ans
    t -= 1
  end
end
puts(ans)
