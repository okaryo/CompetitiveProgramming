T = gets.to_i
T.times do
  x,y,z = gets.split.map(&:to_i)
  y /= 2
  ans = 0
  t = [y,z].min
  z -= t
  y -= t
  ans += t
  if z == 0
    k = [x/2, y].min
    x -= 2*k
    y -= k
    ans += k + x/5
  else
    k = [x,z/2].min
    x -= k
    z -= 2*k
    ans += k
    if x >= 3 && z >= 1
      x -= 3
      z -= 1
      ans += 1
    end
    ans += x/5
  end
  puts ans
end
