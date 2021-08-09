n = gets.to_i
a = (n-1).times.map do |i|
  list = gets.split.map(&:to_i)
  [*[0]*(i+1), *list]
end
ALL = 1<<n
happy = [0]*ALL
ALL.times do |i|
  n.times do |j|
    (j+1).upto(n-1) do |k|
      if i[j] != 0 && i[k] != 0
        happy[i] += a[j][k]
      end
    end
  end
end
ans = -10**100
ALL.times do |n1|
  ALL.times do |n2|
    next if n1&n2 > 0
    n3 = ALL - 1 - (n1|n2)
    ans = [ans, happy[n1] + happy[n2] + happy[n3]].max
  end
end
puts(ans)
