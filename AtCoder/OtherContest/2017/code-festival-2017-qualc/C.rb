s = gets.chomp
r = 0
l = s.length - 1
ans = 0
while r <= l
  if s[r] == s[l]
    r += 1
    l -= 1
  else
    if s[r] == 'x'
      ans += 1
      r += 1
    elsif s[l] == 'x'
      ans += 1
      l -= 1
    else
      puts -1
      exit 0
    end
  end
end
puts ans
