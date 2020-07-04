n, k = gets.split.map(&:to_i)
a = gets.split.map(&:to_i)

con = a.dup
[k, 41].min.times do |i|
  imos = Array.new(n, 0)
  n.times do |j|
    imos[[0, j - con[j]].max] += 1
    if j + con[j] + 1 < n
      imos[j + con[j] + 1] -= 1
    end
  end

  1.upto(n-1) do |j|
    imos[j] += imos[j - 1]
  end

  con = imos
end

puts con.join(' ')
