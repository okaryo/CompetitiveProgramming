def calc(x)
  x + P / 2**(x/1.5)
end

P = gets.to_f

high = 100.0
low = 0.0

while high - low > 0.000000001
  mid_left = high / 3 + low * 2 / 3
  mid_right = high * 2 / 3 + low / 3

  if calc(mid_left) >= calc(mid_right)
    low = mid_left
  else
    high = mid_right
  end
end

puts calc(high)
