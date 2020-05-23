a, b, h, m = gets.split.map(&:to_i)

h_deg = 360.0 / (12 * 60) * (60 * h + m)
m_deg = 360 / 60 * m
theta = [h_deg - m_deg, m_deg - h_deg].max

theta_radian = theta * Math::PI / 180

ans = a ** 2 + b ** 2 - 2 * a * b * Math.cos(theta_radian)
puts Math.sqrt(ans)
