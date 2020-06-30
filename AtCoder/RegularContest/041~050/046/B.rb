n = gets.to_i
a,b = gets.split.map(&:to_i)

ans = true
if n > a
  if a == b
    if  n % (a + 1) == 0
      ans = false
    end
  else
    if a < b
      ans = false
    end
  end
end

puts ans ? 'Takahashi' : 'Aoki'