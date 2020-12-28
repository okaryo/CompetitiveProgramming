n = gets.to_i
ans = n
1.upto(n) do |i|
  t = i
  flag = false
  while t > 0
    if (t % 10) == 7
      ans -= 1
      flag = true
      break
    end
    t /= 10
  end

  next if flag

  s = i
  while s > 0
    if (s % 8) == 7
      ans -= 1
      break
    end
    s /= 8
  end
end
puts ans
